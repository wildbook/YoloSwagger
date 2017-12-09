using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsCollectionsWardSkinList
    {
        [DataMember(Name = "wardSkinList")]
        public long[] WardSkinList { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsWardSkinList {\n");
            sb.Append("  WardSkinList: ").Append(WardSkinList).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}