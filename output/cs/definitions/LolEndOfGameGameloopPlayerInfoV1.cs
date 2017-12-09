using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEndOfGameGameloopPlayerInfoV1
    {
        [DataMember(Name = "rerollDataBag")]
        public LolEndOfGameRerollDataBagForClientV1 RerollDataBag { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEndOfGameGameloopPlayerInfoV1 {\n");
            sb.Append("  RerollDataBag: ").Append(RerollDataBag).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}