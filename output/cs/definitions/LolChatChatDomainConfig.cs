using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatChatDomainConfig
    {
        [DataMember(Name = "ChampSelectDomainName")]
        public string ChampSelectDomainName { get; set; }

        [DataMember(Name = "ClubDomainName")]
        public string ClubDomainName { get; set; }

        [DataMember(Name = "CustomGameDomainName")]
        public string CustomGameDomainName { get; set; }

        [DataMember(Name = "CustomTeamDomainName")]
        public string CustomTeamDomainName { get; set; }

        [DataMember(Name = "P2PDomainName")]
        public string P2PDomainName { get; set; }

        [DataMember(Name = "PostGameDomainName")]
        public string PostGameDomainName { get; set; }

        [DataMember(Name = "PrivateDomainName")]
        public string PrivateDomainName { get; set; }

        [DataMember(Name = "PublicDomainName")]
        public string PublicDomainName { get; set; }

        [DataMember(Name = "RankedTeamDomainName")]
        public string RankedTeamDomainName { get; set; }

        [DataMember(Name = "TeamBuilderDomainName")]
        public string TeamBuilderDomainName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChatDomainConfig {\n");
            sb.Append("  ChampSelectDomainName: ").Append(ChampSelectDomainName).Append("\n");
            sb.Append("  ClubDomainName: ").Append(ClubDomainName).Append("\n");
            sb.Append("  CustomGameDomainName: ").Append(CustomGameDomainName).Append("\n");
            sb.Append("  CustomTeamDomainName: ").Append(CustomTeamDomainName).Append("\n");
            sb.Append("  P2PDomainName: ").Append(P2PDomainName).Append("\n");
            sb.Append("  PostGameDomainName: ").Append(PostGameDomainName).Append("\n");
            sb.Append("  PrivateDomainName: ").Append(PrivateDomainName).Append("\n");
            sb.Append("  PublicDomainName: ").Append(PublicDomainName).Append("\n");
            sb.Append("  RankedTeamDomainName: ").Append(RankedTeamDomainName).Append("\n");
            sb.Append("  TeamBuilderDomainName: ").Append(TeamBuilderDomainName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}