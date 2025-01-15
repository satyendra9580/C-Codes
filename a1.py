# Define the dataset
data = [
    (['Sunny', 'Warm', 'Normal', 'Strong', 'Warm', 'Same'], '+'),
    (['Sunny', 'Warm', 'High', 'Strong', 'Warm', 'Same'], '+'),
    (['Rainy', 'Cold', 'High', 'Strong', 'Warm', 'Change'], '-'),
    (['Sunny', 'Warm', 'High', 'Strong', 'Cool', 'Change'], '+')
]

# Define the conditions to predict
conditions = [
    ['Sunny', 'Warm', 'Normal', 'Strong', 'Cool', 'Change'],
    ['Rainy', 'Cold', 'High', 'Weak', 'Cool', 'Change']
]

# Find-S Algorithm implementation
def find_s_algorithm(data):
    hypothesis = ['?'] * len(data[0][0])
    for instance, label in data:
        if label == '+':  # Only consider positive examples
            for i in range(len(instance)):
                if hypothesis[i] == '?':
                    hypothesis[i] = instance[i]
                elif hypothesis[i] != instance[i]:
                    hypothesis[i] = '?'
    return hypothesis

# Check consistency for Find-G
def is_consistent(hypothesis, instance):
    for h, i in zip(hypothesis, instance):
        if h != '?' and h != i:
            return False
    return True

# Generalize S for Find-G
def generalize_S(S, instance):
    for i in range(len(S[0])):
        if S[0][i] == '\u2205':  # Empty set
            S[0][i] = instance[i]
        elif S[0][i] != instance[i]:
            S[0][i] = '?'
    return S

# Specialize G for Find-G
def specialize_G(G, instance, num_attributes):
    new_G = []
    for g in G:
        for i in range(num_attributes):
            if g[i] == '?':
                for value in set(attribute[i] for attribute, _ in data):
                    if value != instance[i]:
                        new_hypothesis = g[:]
                        new_hypothesis[i] = value
                        new_G.append(new_hypothesis)
    return new_G

# Find-G Algorithm implementation
def find_g_algorithm(data):
    num_attributes = len(data[0][0])
    G = [['?'] * num_attributes]  # Start with the most general hypothesis
    S = [['\u2205'] * num_attributes]  # Start with the most specific hypothesis

    for instance, label in data:
        if label == '+':
            G = [g for g in G if is_consistent(g, instance)]
            S = generalize_S(S, instance)
        else:
            S = [s for s in S if not is_consistent(s, instance)]
            G = specialize_G(G, instance, num_attributes)

    return G

# Running Find-S Algorithm
find_s_result = find_s_algorithm(data)
print("Find-S Result:", find_s_result)

# Running Find-G Algorithm
find_g_result = find_g_algorithm(data)
print("Find-G Result:", find_g_result)
