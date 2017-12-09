using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashMatchmakingReadyCheckResource
    {
        [DataMember(Name = "playerResponse")]
        public LolClashMatchmakingReadyCheckResponse PlayerResponse { get; set; }

        [DataMember(Name = "state")]
        public LolClashMatchmakingReadyCheckState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashMatchmakingReadyCheckResource {\n");
            sb.Append("  PlayerResponse: ").Append(PlayerResponse).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}