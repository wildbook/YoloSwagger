using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ChampSelectLcdsPotentialTradersDTO
    {
        [DataMember(Name = "potentialTraders")]
        public string[] PotentialTraders { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsPotentialTradersDTO {\n");
            sb.Append("  PotentialTraders: ").Append(PotentialTraders).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}