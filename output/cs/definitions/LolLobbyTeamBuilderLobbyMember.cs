using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderLobbyMember
    {
        [DataMember(Name = "autoFillEligible")]
        public bool AutoFillEligible { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        public bool AutoFillProtectedForPromos { get; set; }

        [DataMember(Name = "autoFillProtectedForSoloing")]
        public bool AutoFillProtectedForSoloing { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        public bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "canInviteOthers")]
        public bool CanInviteOthers { get; set; }

        [DataMember(Name = "excludedPositionPreference")]
        public string ExcludedPositionPreference { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "isOwner")]
        public bool IsOwner { get; set; }

        [DataMember(Name = "positionPreferences")]
        public LolLobbyTeamBuilderLobbyPositionPreferences PositionPreferences { get; set; }

        [DataMember(Name = "showPositionExcluder")]
        public bool ShowPositionExcluder { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderLobbyMember {\n");
            sb.Append("  AutoFillEligible: ").Append(AutoFillEligible).Append("\n");
            sb.Append("  AutoFillProtectedForPromos: ").Append(AutoFillProtectedForPromos).Append("\n");
            sb.Append("  AutoFillProtectedForSoloing: ").Append(AutoFillProtectedForSoloing).Append("\n");
            sb.Append("  AutoFillProtectedForStreaking: ").Append(AutoFillProtectedForStreaking).Append("\n");
            sb.Append("  CanInviteOthers: ").Append(CanInviteOthers).Append("\n");
            sb.Append("  ExcludedPositionPreference: ").Append(ExcludedPositionPreference).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsOwner: ").Append(IsOwner).Append("\n");
            sb.Append("  PositionPreferences: ").Append(PositionPreferences).Append("\n");
            sb.Append("  ShowPositionExcluder: ").Append(ShowPositionExcluder).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}