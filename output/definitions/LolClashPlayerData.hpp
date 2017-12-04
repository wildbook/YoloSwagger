#ifndef SWAGGER_TYPES_LolClashPlayerData_HPP
#define SWAGGER_TYPES_LolClashPlayerData_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolClashPlayerData {
'    // 
    int32_t tickets;
  };

  void to_json(nlohmann::json& j, const LolClashPlayerData& v) {
    j["tickets"] = v.tickets;
  }

  void from_json(const nlohmann::json& j, LolClashPlayerData& v) {
    v.tickets = j.at("tickets").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashPlayerData_HPP
