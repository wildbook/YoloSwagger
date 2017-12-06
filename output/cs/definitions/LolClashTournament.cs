using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashTournament
    {
        [DataMember(Name = "allowRosterCreation")]
        bool AllowRosterCreation { get; set; }

        [DataMember(Name = "allowRosterDisband")]
        bool AllowRosterDisband { get; set; }

        [DataMember(Name = "buyInOptions")]
        int[] BuyInOptions { get; set; }

        [DataMember(Name = "endTimeMs")]
        long EndTimeMs { get; set; }

        [DataMember(Name = "entryFee")]
        int EntryFee { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "maxSubstitutes")]
        int MaxSubstitutes { get; set; }

        [DataMember(Name = "nameLocKey")]
        string NameLocKey { get; set; }

        [DataMember(Name = "phases")]
        LolClashTournamentPhase[] Phases { get; set; }

        [DataMember(Name = "rewardConfig")]
        ClashRewardConfigClient[] RewardConfig { get; set; }

        [DataMember(Name = "rosterSize")]
        int RosterSize { get; set; }

        [DataMember(Name = "scoutingDurationMs")]
        long ScoutingDurationMs { get; set; }

        [DataMember(Name = "startTimeMs")]
        long StartTimeMs { get; set; }

        [DataMember(Name = "themeId")]
        int ThemeId { get; set; }

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