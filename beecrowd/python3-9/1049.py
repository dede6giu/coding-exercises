# -*- coding: utf-8 -*-

vertebrate = input()
species = input()
food = input()

animals = {
    'vertebrado': {
            'ave': {
                'carnivoro': 'aguia',
                'onivoro': 'pomba'
            },
            'mamifero': {
                'onivoro': 'homem',
                'herbivoro': 'vaca'
            }
        },
    'invertebrado': {
            'inseto': {
                'hematofago': 'pulga',
                'herbivoro': 'lagarta'
            },
            'anelideo': {
                'hematofago': 'sanguessuga',
                'onivoro': 'minhoca'
            }
        }
}

print(animals[vertebrate][species][food])