using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolInventoryCacheEntry
    {
        [DataMember(Name = "signedInventoryJwt")]
        string SignedInventoryJwt { get; set; }

        [DataMember(Name = "valid")]
        bool Valid { get; set; }

        [DataMember(Name = "expirationMS")]
        ulong ExpirationMS { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolInventoryCacheEntry {\n");
            sb.Append("  SignedInventoryJwt: ").Append(SignedInventoryJwt).Append("\n");
            sb.Append("  Valid: ").Append(Valid).Append("\n");
            sb.Append("  ExpirationMS: ").Append(ExpirationMS).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}