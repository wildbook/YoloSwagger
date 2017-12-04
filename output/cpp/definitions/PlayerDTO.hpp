#ifndef SWAGGER_TYPES_PlayerDTO_HPP
#define SWAGGER_TYPES_PlayerDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerDTO {
    // 
    int32_t tickets;
  };

  inline void to_json(nlohmann::json& j, const PlayerDTO& v) {
    j["tickets"] = v.tickets;
  }

  inline void from_json(const nlohmann::json& j, PlayerDTO& v) {
    v.tickets = j.at("tickets").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerDTO_HPP
