#ifndef SWAGGER_TYPES_LolPerksDisabledPerksResource_HPP
#define SWAGGER_TYPES_LolPerksDisabledPerksResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksDisabledPerksResource {
    // 
    std::vector<int32_t> disabledPerks;
  };

  void to_json(nlohmann::json& j, const LolPerksDisabledPerksResource& v) {
    j["disabledPerks"] = v.disabledPerks;
  }

  void from_json(const nlohmann::json& j, LolPerksDisabledPerksResource& v) {
    v.disabledPerks = j.at("disabledPerks").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolPerksDisabledPerksResource_HPP
