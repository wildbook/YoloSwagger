using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLcdsGameMetaData
    {
        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "mapId")]
        public int MapId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLcdsGameMetaData {\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}