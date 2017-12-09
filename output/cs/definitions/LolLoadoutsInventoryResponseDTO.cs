using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoadoutsInventoryResponseDTO
    {
        [DataMember(Name = "data")]
        public LolLoadoutsInventoryDTO Data { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoadoutsInventoryResponseDTO {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}