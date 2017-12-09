using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStoreSale
    {
        [DataMember(Name = "endDate")]
        public string EndDate { get; set; }

        [DataMember(Name = "prices")]
        public LolStoreItemCost[] Prices { get; set; }

        [DataMember(Name = "startDate")]
        public string StartDate { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreSale {\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  Prices: ").Append(Prices).Append("\n");
            sb.Append("  StartDate: ").Append(StartDate).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}