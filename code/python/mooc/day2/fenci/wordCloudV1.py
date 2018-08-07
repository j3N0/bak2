#wordCloudV1.py
import wordcloud

f = open('hamlet.txt', 'r')
txt = f.read()
w = wordcloud.WordCloud(width=1200, height=800)
w.generate(txt)
w.to_file('word_cloud.png')
