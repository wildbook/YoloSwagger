using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MemberSinceDto
    {
        [DataMember(Name = "playerInfo")]
        public PlayerInfoDto PlayerInfo { get; set; }

        [DataMember(Name = "role")]
        public string Role { get; set; }

        [DataMember(Name = "since")]
        public long Since { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MemberSinceDto {\n");
            sb.Append("  PlayerInfo: ").Append(PlayerInfo).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  Since: ").Append(Since).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}