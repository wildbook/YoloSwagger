using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerGameStats
    {
        [DataMember(Name = "createDate")]
        public ulong CreateDate { get; set; }

        [DataMember(Name = "fellowPlayers")]
        public FellowPlayerInfo[] FellowPlayers { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "userId")]
        public ulong UserId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerGameStats {\n");
            sb.Append("  CreateDate: ").Append(CreateDate).Append("\n");
            sb.Append("  FellowPlayers: ").Append(FellowPlayers).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  UserId: ").Append(UserId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}