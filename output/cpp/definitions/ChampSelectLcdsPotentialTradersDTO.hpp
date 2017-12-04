#ifndef SWAGGER_TYPES_ChampSelectLcdsPotentialTradersDTO_HPP
#define SWAGGER_TYPES_ChampSelectLcdsPotentialTradersDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ChampSelectLcdsPotentialTradersDTO {
    // 
    std::vector<std::string> potentialTraders;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPotentialTradersDTO& v) {
    j["potentialTraders"] = v.potentialTraders;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPotentialTradersDTO& v) {
    v.potentialTraders = j.at("potentialTraders").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsPotentialTradersDTO_HPP
