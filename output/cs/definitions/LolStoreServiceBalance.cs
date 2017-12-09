using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStoreServiceBalance
    {
        [DataMember(Name = "amount")]
        public long Amount { get; set; }

        [DataMember(Name = "currency")]
        public string Currency { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreServiceBalance {\n");
            sb.Append("  Amount: ").Append(Amount).Append("\n");
            sb.Append("  Currency: ").Append(Currency).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}