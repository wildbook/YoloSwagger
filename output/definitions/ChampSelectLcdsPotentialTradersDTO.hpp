#ifndef SWAGGER_TYPES_ChampSelectLcdsPotentialTradersDTO_HPP
#define SWAGGER_TYPES_ChampSelectLcdsPotentialTradersDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct ChampSelectLcdsPotentialTradersDTO {
'    // 
    std::vector<std::string> potentialTraders;
  };

  void to_json(nlohmann::json& j, const ChampSelectLcdsPotentialTradersDTO& v) {
    j["potentialTraders"] = v.potentialTraders;
  }

  void from_json(const nlohmann::json& j, ChampSelectLcdsPotentialTradersDTO& v) {
    v.potentialTraders = j.at("potentialTraders").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsPotentialTradersDTO_HPP
