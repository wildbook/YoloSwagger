#ifndef SWAGGER_TYPES_LolPerksGetGameCustomizationDTO_HPP
#define SWAGGER_TYPES_LolPerksGetGameCustomizationDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksGetGameCustomizationDTO {
    // 
    std::string queueType;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGetGameCustomizationDTO& v) {
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGetGameCustomizationDTO& v) {
    v.queueType = j.at("queueType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPerksGetGameCustomizationDTO_HPP
