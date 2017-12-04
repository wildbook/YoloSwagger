#ifndef SWAGGER_TYPES_LolPerksPerkSettingResource_HPP
#define SWAGGER_TYPES_LolPerksPerkSettingResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksPerkSettingResource {
    // 
    int32_t perkStyle;
    // 
    std::vector<int32_t> perkIds;
    // 
    int32_t perkSubStyle;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkSettingResource& v) {
    j["perkStyle"] = v.perkStyle;
    j["perkIds"] = v.perkIds;
    j["perkSubStyle"] = v.perkSubStyle;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkSettingResource& v) {
    v.perkStyle = j.at("perkStyle").get<int32_t>;
    v.perkIds = j.at("perkIds").get<std::vector<int32_t>>;
    v.perkSubStyle = j.at("perkSubStyle").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPerkSettingResource_HPP
