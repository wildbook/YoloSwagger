using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderLobbyMember
    {
        [DataMember(Name = "positionPreferences")]
        LolLobbyTeamBuilderLobbyPositionPreferences PositionPreferences { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        bool AutoFillProtectedForPromos { get; set; }

        [DataMember(Name = "autoFillEligible")]
        bool AutoFillEligible { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "excludedPositionPreference")]
        string ExcludedPositionPreference { get; set; }

        [DataMember(Name = "isOwner")]
        bool IsOwner { get; set; }

        [DataMember(Name = "canInviteOthers")]
        bool CanInviteOthers { get; set; }

        [DataMember(Name = "showPositionExcluder")]
        bool ShowPositionExcluder { get; set; }

        [DataMember(Name = "autoFillProtectedForSoloing")]
        bool AutoFillProtectedForSoloing { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderLobbyMember {\n");
            sb.Append("  PositionPreferences: ").Append(PositionPreferences).Append("\n");
            sb.Append("  AutoFillProtectedForPromos: ").Append(AutoFillProtectedForPromos).Append("\n");
            sb.Append("  AutoFillEligible: ").Append(AutoFillEligible).Append("\n");
            sb.Append("  AutoFillProtectedForStreaking: ").Append(AutoFillProtectedForStreaking).Append("\n");
            sb.Append("  ExcludedPositionPreference: ").Append(ExcludedPositionPreference).Append("\n");
            sb.Append("  IsOwner: ").Append(IsOwner).Append("\n");
            sb.Append("  CanInviteOthers: ").Append(CanInviteOthers).Append("\n");
            sb.Append("  ShowPositionExcluder: ").Append(ShowPositionExcluder).Append("\n");
            sb.Append("  AutoFillProtectedForSoloing: ").Append(AutoFillProtectedForSoloing).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}