using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameQueuesPlatformConfigEnabledMap
    {
        [DataMember(Name = "gameMapId")]
        public int GameMapId { get; set; }

        [DataMember(Name = "minPlayers")]
        public int MinPlayers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameQueuesPlatformConfigEnabledMap {\n");
            sb.Append("  GameMapId: ").Append(GameMapId).Append("\n");
            sb.Append("  MinPlayers: ").Append(MinPlayers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}