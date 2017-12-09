using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderTbLobbySlotResource
    {
        [DataMember(Name = "autoFillEligible")]
        public bool AutoFillEligible { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        public bool AutoFillProtectedForPromos { get; set; }

        [DataMember(Name = "autoFillProtectedForSoloing")]
        public bool AutoFillProtectedForSoloing { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        public bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "draftPositionPreferences")]
        public string[] DraftPositionPreferences { get; set; }

        [DataMember(Name = "excludedPositionPreference")]
        public string ExcludedPositionPreference { get; set; }

        [DataMember(Name = "showPositionExcluder")]
        public bool ShowPositionExcluder { get; set; }

        [DataMember(Name = "slotId")]
        public int SlotId { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

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