using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchmakingGameflowQueue
    {
        [DataMember(Name = "gameTypeConfig")]
        LolMatchmakingGameflowGameTypeConfig GameTypeConfig { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchmakingGameflowQueue {\n");
            sb.Append("  GameTypeConfig: ").Append(GameTypeConfig).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}