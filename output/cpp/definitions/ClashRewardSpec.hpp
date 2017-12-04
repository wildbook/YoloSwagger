#ifndef SWAGGER_TYPES_ClashRewardSpec_HPP
#define SWAGGER_TYPES_ClashRewardSpec_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClashRewardSpec {
    // 
    std::string seasonId;
    // 
    std::string name;
    // 
    std::string level;
    // 
    std::string cup;
    // 
    std::string theme;
    // 
    std::string bracket;
    // 
    std::string tier;
    // 
    std::string pedestal;
    // 
    std::string gem;
    // 
    std::string quantity;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardSpec& v) {
    j["seasonId"] = v.seasonId;
    j["name"] = v.name;
    j["level"] = v.level;
    j["cup"] = v.cup;
    j["theme"] = v.theme;
    j["bracket"] = v.bracket;
    j["tier"] = v.tier;
    j["pedestal"] = v.pedestal;
    j["gem"] = v.gem;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardSpec& v) {
    v.seasonId = j.at("seasonId").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.level = j.at("level").get<std::string>;
    v.cup = j.at("cup").get<std::string>;
    v.theme = j.at("theme").get<std::string>;
    v.bracket = j.at("bracket").get<std::string>;
    v.tier = j.at("tier").get<std::string>;
    v.pedestal = j.at("pedestal").get<std::string>;
    v.gem = j.at("gem").get<std::string>;
    v.quantity = j.at("quantity").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClashRewardSpec_HPP
