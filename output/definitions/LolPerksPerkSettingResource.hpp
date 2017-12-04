#ifndef SWAGGER_TYPES_LolPerksPerkSettingResource_HPP
#define SWAGGER_TYPES_LolPerksPerkSettingResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolPerksPerkSettingResource {
'    // 
    std::vector<int32_t> perkIds;
    // 
    int32_t perkStyle;
    // 
    int32_t perkSubStyle;
  };

  void to_json(nlohmann::json& j, const LolPerksPerkSettingResource& v) {
    j["perkIds"] = v.perkIds;
    j["perkStyle"] = v.perkStyle;
    j["perkSubStyle"] = v.perkSubStyle;
  }

  void from_json(const nlohmann::json& j, LolPerksPerkSettingResource& v) {
    v.perkIds = j.at("perkIds").get<std::vector<int32_t>>;
    v.perkStyle = j.at("perkStyle").get<int32_t>;
    v.perkSubStyle = j.at("perkSubStyle").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPerkSettingResource_HPP
