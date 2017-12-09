using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct EndOfGameLcdsTeamInfo
    {
        [DataMember(Name = "memberStatusString")]
        public string MemberStatusString { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "secondsUntilEligibleForDeletion")]
        public long SecondsUntilEligibleForDeletion { get; set; }

        [DataMember(Name = "tag")]
        public string Tag { get; set; }

        [DataMember(Name = "teamId")]
        public EndOfGameLcdsTeamId TeamId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameLcdsTeamInfo {\n");
            sb.Append("  MemberStatusString: ").Append(MemberStatusString).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  SecondsUntilEligibleForDeletion: ").Append(SecondsUntilEligibleForDeletion).Append("\n");
            sb.Append("  Tag: ").Append(Tag).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}