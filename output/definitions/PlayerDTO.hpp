#ifndef SWAGGER_TYPES_PlayerDTO_HPP
#define SWAGGER_TYPES_PlayerDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct PlayerDTO {
'    // 
    int32_t tickets;
  };

  void to_json(nlohmann::json& j, const PlayerDTO& v) {
    j["tickets"] = v.tickets;
  }

  void from_json(const nlohmann::json& j, PlayerDTO& v) {
    v.tickets = j.at("tickets").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerDTO_HPP
