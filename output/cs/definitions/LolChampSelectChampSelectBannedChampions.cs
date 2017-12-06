using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampSelectChampSelectBannedChampions
    {
        [DataMember(Name = "myTeamBans")]
        int[] MyTeamBans { get; set; }

        [DataMember(Name = "numBans")]
        int NumBans { get; set; }

        [DataMember(Name = "theirTeamBans")]
        int[] TheirTeamBans { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectChampSelectBannedChampions {\n");
            sb.Append("  MyTeamBans: ").Append(MyTeamBans).Append("\n");
            sb.Append("  NumBans: ").Append(NumBans).Append("\n");
            sb.Append("  TheirTeamBans: ").Append(TheirTeamBans).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}