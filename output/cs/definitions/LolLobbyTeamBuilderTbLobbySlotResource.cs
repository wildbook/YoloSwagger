using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderTbLobbySlotResource
    {
        [DataMember(Name = "autoFillEligible")]
        bool AutoFillEligible { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        bool AutoFillProtectedForPromos { get; set; }

        [DataMember(Name = "autoFillProtectedForSoloing")]
        bool AutoFillProtectedForSoloing { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "draftPositionPreferences")]
        string[] DraftPositionPreferences { get; set; }

        [DataMember(Name = "excludedPositionPreference")]
        string ExcludedPositionPreference { get; set; }

        [DataMember(Name = "showPositionExcluder")]
        bool ShowPositionExcluder { get; set; }

        [DataMember(Name = "slotId")]
        int SlotId { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTbLobbySlotResource {\n");
            sb.Append("  AutoFillEligible: ").Append(AutoFillEligible).Append("\n");
            sb.Append("  AutoFillProtectedForPromos: ").Append(AutoFillProtectedForPromos).Append("\n");
            sb.Append("  AutoFillProtectedForSoloing: ").Append(AutoFillProtectedForSoloing).Append("\n");
            sb.Append("  AutoFillProtectedForStreaking: ").Append(AutoFillProtectedForStreaking).Append("\n");
            sb.Append("  DraftPositionPreferences: ").Append(DraftPositionPreferences).Append("\n");
            sb.Append("  ExcludedPositionPreference: ").Append(ExcludedPositionPreference).Append("\n");
            sb.Append("  ShowPositionExcluder: ").Append(ShowPositionExcluder).Append("\n");
            sb.Append("  SlotId: ").Append(SlotId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}