#ifndef SWAGGER_TYPES_ClashRewardSpec_HPP
#define SWAGGER_TYPES_ClashRewardSpec_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClashRewardSpec {
    // 
    std::string bracket;
    // 
    std::string cup;
    // 
    std::string gem;
    // 
    std::string level;
    // 
    std::string name;
    // 
    std::string pedestal;
    // 
    std::string quantity;
    // 
    std::string seasonId;
    // 
    std::string theme;
    // 
    std::string tier;
  };

  void to_json(nlohmann::json& j, const ClashRewardSpec& v) {
    j["bracket"] = v.bracket;
    j["cup"] = v.cup;
    j["gem"] = v.gem;
    j["level"] = v.level;
    j["name"] = v.name;
    j["pedestal"] = v.pedestal;
    j["quantity"] = v.quantity;
    j["seasonId"] = v.seasonId;
    j["theme"] = v.theme;
    j["tier"] = v.tier;
  }

  void from_json(const nlohmann::json& j, ClashRewardSpec& v) {
    v.bracket = j.at("bracket").get<std::string>;
    v.cup = j.at("cup").get<std::string>;
    v.gem = j.at("gem").get<std::string>;
    v.level = j.at("level").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.pedestal = j.at("pedestal").get<std::string>;
    v.quantity = j.at("quantity").get<std::string>;
    v.seasonId = j.at("seasonId").get<std::string>;
    v.theme = j.at("theme").get<std::string>;
    v.tier = j.at("tier").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClashRewardSpec_HPP
