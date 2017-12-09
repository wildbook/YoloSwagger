using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerLevelUpEvent
    {
        [DataMember(Name = "leveledUp")]
        public bool LeveledUp { get; set; }

        [DataMember(Name = "newMasterySlotUnlocked")]
        public bool NewMasterySlotUnlocked { get; set; }

        [DataMember(Name = "newQueues")]
        public int[] NewQueues { get; set; }

        [DataMember(Name = "newRuneSlotUnlocked")]
        public bool NewRuneSlotUnlocked { get; set; }

        [DataMember(Name = "newSpells")]
        public ulong[] NewSpells { get; set; }

        [DataMember(Name = "newSummonerLevel")]
        public uint NewSummonerLevel { get; set; }

        [DataMember(Name = "nowHasAccessToLoot")]
        public bool NowHasAccessToLoot { get; set; }

        [DataMember(Name = "nowHasAccessToMastery")]
        public bool NowHasAccessToMastery { get; set; }

        [DataMember(Name = "nowHasAccessToPublicChatRooms")]
        public bool NowHasAccessToPublicChatRooms { get; set; }

        [DataMember(Name = "rpEarned")]
        public int RpEarned { get; set; }

        [DataMember(Name = "switchedToStandardFreeToPlayChampRotation")]
        public bool SwitchedToStandardFreeToPlayChampRotation { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerLevelUpEvent {\n");
            sb.Append("  LeveledUp: ").Append(LeveledUp).Append("\n");
            sb.Append("  NewMasterySlotUnlocked: ").Append(NewMasterySlotUnlocked).Append("\n");
            sb.Append("  NewQueues: ").Append(NewQueues).Append("\n");
            sb.Append("  NewRuneSlotUnlocked: ").Append(NewRuneSlotUnlocked).Append("\n");
            sb.Append("  NewSpells: ").Append(NewSpells).Append("\n");
            sb.Append("  NewSummonerLevel: ").Append(NewSummonerLevel).Append("\n");
            sb.Append("  NowHasAccessToLoot: ").Append(NowHasAccessToLoot).Append("\n");
            sb.Append("  NowHasAccessToMastery: ").Append(NowHasAccessToMastery).Append("\n");
            sb.Append("  NowHasAccessToPublicChatRooms: ").Append(NowHasAccessToPublicChatRooms).Append("\n");
            sb.Append("  RpEarned: ").Append(RpEarned).Append("\n");
            sb.Append("  SwitchedToStandardFreeToPlayChampRotation: ").Append(SwitchedToStandardFreeToPlayChampRotation).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}