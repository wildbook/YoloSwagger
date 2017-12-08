using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerLevelUpEvent
    {
        [DataMember(Name = "newMasterySlotUnlocked")]
        bool NewMasterySlotUnlocked { get; set; }

        [DataMember(Name = "newSummonerLevel")]
        uint NewSummonerLevel { get; set; }

        [DataMember(Name = "rpEarned")]
        int RpEarned { get; set; }

        [DataMember(Name = "leveledUp")]
        bool LeveledUp { get; set; }

        [DataMember(Name = "nowHasAccessToMastery")]
        bool NowHasAccessToMastery { get; set; }

        [DataMember(Name = "newSpells")]
        ulong[] NewSpells { get; set; }

        [DataMember(Name = "newQueues")]
        int[] NewQueues { get; set; }

        [DataMember(Name = "newRuneSlotUnlocked")]
        bool NewRuneSlotUnlocked { get; set; }

        [DataMember(Name = "nowHasAccessToPublicChatRooms")]
        bool NowHasAccessToPublicChatRooms { get; set; }

        [DataMember(Name = "nowHasAccessToLoot")]
        bool NowHasAccessToLoot { get; set; }

        [DataMember(Name = "switchedToStandardFreeToPlayChampRotation")]
        bool SwitchedToStandardFreeToPlayChampRotation { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerLevelUpEvent {\n");
            sb.Append("  NewMasterySlotUnlocked: ").Append(NewMasterySlotUnlocked).Append("\n");
            sb.Append("  NewSummonerLevel: ").Append(NewSummonerLevel).Append("\n");
            sb.Append("  RpEarned: ").Append(RpEarned).Append("\n");
            sb.Append("  LeveledUp: ").Append(LeveledUp).Append("\n");
            sb.Append("  NowHasAccessToMastery: ").Append(NowHasAccessToMastery).Append("\n");
            sb.Append("  NewSpells: ").Append(NewSpells).Append("\n");
            sb.Append("  NewQueues: ").Append(NewQueues).Append("\n");
            sb.Append("  NewRuneSlotUnlocked: ").Append(NewRuneSlotUnlocked).Append("\n");
            sb.Append("  NowHasAccessToPublicChatRooms: ").Append(NowHasAccessToPublicChatRooms).Append("\n");
            sb.Append("  NowHasAccessToLoot: ").Append(NowHasAccessToLoot).Append("\n");
            sb.Append("  SwitchedToStandardFreeToPlayChampRotation: ").Append(SwitchedToStandardFreeToPlayChampRotation).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}