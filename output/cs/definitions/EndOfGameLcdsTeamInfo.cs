using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct EndOfGameLcdsTeamInfo
    {
        [DataMember(Name = "teamId")]
        EndOfGameLcdsTeamId TeamId { get; set; }

        [DataMember(Name = "tag")]
        string Tag { get; set; }

        [DataMember(Name = "memberStatusString")]
        string MemberStatusString { get; set; }

        [DataMember(Name = "secondsUntilEligibleForDeletion")]
        long SecondsUntilEligibleForDeletion { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameLcdsTeamInfo {\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("  Tag: ").Append(Tag).Append("\n");
            sb.Append("  MemberStatusString: ").Append(MemberStatusString).Append("\n");
            sb.Append("  SecondsUntilEligibleForDeletion: ").Append(SecondsUntilEligibleForDeletion).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}