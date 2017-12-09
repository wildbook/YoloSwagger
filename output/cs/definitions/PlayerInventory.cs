using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerInventory
    {
        [DataMember(Name = "champions")]
        public int[] Champions { get; set; }

        [DataMember(Name = "icons")]
        public int[] Icons { get; set; }

        [DataMember(Name = "skins")]
        public int[] Skins { get; set; }

        [DataMember(Name = "wardSkins")]
        public long[] WardSkins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerInventory {\n");
            sb.Append("  Champions: ").Append(Champions).Append("\n");
            sb.Append("  Icons: ").Append(Icons).Append("\n");
            sb.Append("  Skins: ").Append(Skins).Append("\n");
            sb.Append("  WardSkins: ").Append(WardSkins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}