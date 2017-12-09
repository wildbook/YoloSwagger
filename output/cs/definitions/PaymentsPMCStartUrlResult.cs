using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PaymentsPMCStartUrlResult
    {
        [DataMember(Name = "createdAt")]
        public string CreatedAt { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "localeId")]
        public string LocaleId { get; set; }

        [DataMember(Name = "playerFacingId")]
        public string PlayerFacingId { get; set; }

        [DataMember(Name = "pmcStartUrl")]
        public string PmcStartUrl { get; set; }

        [DataMember(Name = "summonerLevel")]
        public short SummonerLevel { get; set; }

        [DataMember(Name = "userId")]
        public string UserId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PaymentsPMCStartUrlResult {\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LocaleId: ").Append(LocaleId).Append("\n");
            sb.Append("  PlayerFacingId: ").Append(PlayerFacingId).Append("\n");
            sb.Append("  PmcStartUrl: ").Append(PmcStartUrl).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("  UserId: ").Append(UserId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}