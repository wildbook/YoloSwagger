using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerRosterHistoryDTO
    {
        [DataMember(Name = "rosters")]
        RosterMemberDTO[] Rosters { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerRosterHistoryDTO {\n");
            sb.Append("  Rosters: ").Append(Rosters).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}