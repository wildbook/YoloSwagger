using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashTournament
    {
        [DataMember(Name = "allowRosterCreation")]
        public bool AllowRosterCreation { get; set; }

        [DataMember(Name = "allowRosterDisband")]
        public bool AllowRosterDisband { get; set; }

        [DataMember(Name = "buyInOptions")]
        public int[] BuyInOptions { get; set; }

        [DataMember(Name = "endTimeMs")]
        public long EndTimeMs { get; set; }

        [DataMember(Name = "entryFee")]
        public int EntryFee { get; set; }

        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "maxSubstitutes")]
        public int MaxSubstitutes { get; set; }

        [DataMember(Name = "nameLocKey")]
        public string NameLocKey { get; set; }

        [DataMember(Name = "phases")]
        public LolClashTournamentPhase[] Phases { get; set; }

        [DataMember(Name = "rewardConfig")]
        public ClashRewardConfigClient[] RewardConfig { get; set; }

        [DataMember(Name = "rosterSize")]
        public int RosterSize { get; set; }

        [DataMember(Name = "scoutingDurationMs")]
        public long ScoutingDurationMs { get; set; }

        [DataMember(Name = "startTimeMs")]
        public long StartTimeMs { get; set; }

        [DataMember(Name = "themeId")]
        public int ThemeId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashTournament {\n");
            sb.Append("  AllowRosterCreation: ").Append(AllowRosterCreation).Append("\n");
            sb.Append("  AllowRosterDisband: ").Append(AllowRosterDisband).Append("\n");
            sb.Append("  BuyInOptions: ").Append(BuyInOptions).Append("\n");
            sb.Append("  EndTimeMs: ").Append(EndTimeMs).Append("\n");
            sb.Append("  EntryFee: ").Append(EntryFee).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  MaxSubstitutes: ").Append(MaxSubstitutes).Append("\n");
            sb.Append("  NameLocKey: ").Append(NameLocKey).Append("\n");
            sb.Append("  Phases: ").Append(Phases).Append("\n");
            sb.Append("  RewardConfig: ").Append(RewardConfig).Append("\n");
            sb.Append("  RosterSize: ").Append(RosterSize).Append("\n");
            sb.Append("  ScoutingDurationMs: ").Append(ScoutingDurationMs).Append("\n");
            sb.Append("  StartTimeMs: ").Append(StartTimeMs).Append("\n");
            sb.Append("  ThemeId: ").Append(ThemeId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}