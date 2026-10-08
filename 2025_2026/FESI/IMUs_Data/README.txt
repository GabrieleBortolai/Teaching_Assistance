Nelle cartelle user_ij_sync sono disponibili le serie temporali degli IMU che misurano i dati delle caviglie e coscie.
Le serie temporali (non filtrate) nella cartella segmented sono già segmentate, e i segmenti vengono caricati in memoria utilizzando l’algoritmo segment_loader.

Ogni misura è composta da:

- l’accelerazione [m/s^2] rilevata dall’accelerometro,

- la velocità angolare [rad/s] rilevata dal giroscopio,

- la proiezione della gravità sui tre assi, con norma pari a 9.81.

(Tutte le unità di misura precedenti sono nel SI).

È inoltre presente un timestamp in millisecondi nella time zone locale (Roma, Italia).

Nella cartella è anche riportata un’immagine con la direzione degli assi: gli IMU presentano una terna sinistrorsa.

Maggiori informazioni su come i dati vengono salvati in memoria sono disponibili all’interno dell’algoritmo.
