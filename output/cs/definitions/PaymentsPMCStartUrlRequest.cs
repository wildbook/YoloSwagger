using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PaymentsPMCStartUrlRequest
    {
        [DataMember(Name = "gifteeAccountId")]
        public int GifteeAccountId { get; set; }

        [DataMember(Name = "gifteeMessage")]
        public string GifteeMessage { get; set; }

        [DataMember(Name = "isPrepaid")]
        public bool IsPrepaid { get; set; }

        [DataMember(Name = "localeId")]
        public string LocaleId { get; set; }

        [DataMember(Name = "summonerLevel")]
        public short SummonerLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PaymentsPMCStartUrlRequest {\n");
            sb.Append("  GifteeAccountId: ").Append(GifteeAccountId).Append("\n");
            sb.Append("  GifteeMessage: ").Append(GifteeMessage).Append("\n");
            sb.Append("  IsPrepaid: ").Append(IsPrepaid).Append("\n");
            sb.Append("  LocaleId: ").Append(LocaleId).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}