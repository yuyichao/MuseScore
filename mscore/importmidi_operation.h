#ifndef IMPORTMIDI_OPERATION_H
#define IMPORTMIDI_OPERATION_H


namespace Ms {

// all enums below should have default indexes like 0, 1, 2...
// text names for enum items are in OperationsModel class

struct MidiOperation
      {
      enum class Type {
            DO_IMPORT = 0,

            QUANT_VALUE,
            QUANT_REDUCE,
            QUANT_HUMAN,

            DO_LHRH_SEPARATION,
            LHRH_METHOD,
            LHRH_SPLIT_OCTAVE,
            LHRH_SPLIT_NOTE,

            USE_DOTS,
            USE_MULTIPLE_VOICES,

            TUPLET_SEARCH,
            TUPLET_2,
            TUPLET_3,
            TUPLET_4,
            TUPLET_5,
            TUPLET_7,
            TUPLET_9
      } type;

      QVariant value;

      enum class QuantValue {
            SHORTEST_IN_BAR = 0,
            FROM_PREFERENCES,
            N_4,
            N_8,
            N_16,
            N_32,
            N_64,
            N_128
            };

      enum class LHRHMethod {
            HAND_WIDTH = 0,
            SPECIFIED_PITCH
            };

      enum class Octave {
            C_1 = 0,
            C0,
            C1,
            C2,
            C3,
            C4,
            C5,
            C6,
            C7,
            C8,
            C9
            };

      enum class Note {
            C = 0,
            Cis,
            D,
            Dis,
            E,
            F,
            Fis,
            G,
            Gis,
            A,
            Ais,
            H
            };
      };

} // namespace Ms


#endif // IMPORTMIDI_OPERATION_H
