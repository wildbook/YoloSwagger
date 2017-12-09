using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerRosterHistoryDTO
    {
        [DataMember(Name = "rosters")]
        public RosterMemberDTO[] Rosters { get; set; }

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