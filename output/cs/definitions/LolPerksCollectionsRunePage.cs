using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPerksCollectionsRunePage
    {
        [DataMember(Name = "current")]
        bool Current { get; set; }

        [DataMember(Name = "id")]
        uint Id { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "runes")]
        LolPerksCollectionsRune[] Runes { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksCollectionsRunePage {\n");
            sb.Append("  Current: ").Append(Current).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Runes: ").Append(Runes).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}