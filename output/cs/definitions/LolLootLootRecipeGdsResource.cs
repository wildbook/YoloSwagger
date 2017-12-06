using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootLootRecipeGdsResource
    {
        [DataMember(Name = "placeholder")]
        string Placeholder { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLootRecipeGdsResource {\n");
            sb.Append("  Placeholder: ").Append(Placeholder).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}