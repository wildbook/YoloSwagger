using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatChatDomainConfig
    {
        [DataMember(Name = "CustomGameDomainName")]
        string CustomGameDomainName { get; set; }

        [DataMember(Name = "PostGameDomainName")]
        string PostGameDomainName { get; set; }

        [DataMember(Name = "ChampSelectDomainName")]
        string ChampSelectDomainName { get; set; }

        [DataMember(Name = "PublicDomainName")]
        string PublicDomainName { get; set; }

        [DataMember(Name = "TeamBuilderDomainName")]
        string TeamBuilderDomainName { get; set; }

        [DataMember(Name = "CustomTeamDomainName")]
        string CustomTeamDomainName { get; set; }

        [DataMember(Name = "PrivateDomainName")]
        string PrivateDomainName { get; set; }

        [DataMember(Name = "RankedTeamDomainName")]
        string RankedTeamDomainName { get; set; }

        [DataMember(Name = "P2PDomainName")]
        string P2PDomainName { get; set; }

        [DataMember(Name = "ClubDomainName")]
        string ClubDomainName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChatDomainConfig {\n");
            sb.Append("  CustomGameDomainName: ").Append(CustomGameDomainName).Append("\n");
            sb.Append("  PostGameDomainName: ").Append(PostGameDomainName).Append("\n");
            sb.Append("  ChampSelectDomainName: ").Append(ChampSelectDomainName).Append("\n");
            sb.Append("  PublicDomainName: ").Append(PublicDomainName).Append("\n");
            sb.Append("  TeamBuilderDomainName: ").Append(TeamBuilderDomainName).Append("\n");
            sb.Append("  CustomTeamDomainName: ").Append(CustomTeamDomainName).Append("\n");
            sb.Append("  PrivateDomainName: ").Append(PrivateDomainName).Append("\n");
            sb.Append("  RankedTeamDomainName: ").Append(RankedTeamDomainName).Append("\n");
            sb.Append("  P2PDomainName: ").Append(P2PDomainName).Append("\n");
            sb.Append("  ClubDomainName: ").Append(ClubDomainName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}