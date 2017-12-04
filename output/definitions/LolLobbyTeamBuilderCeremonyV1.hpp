#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderCeremonyV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderCeremonyV1_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyTeamBuilderCeremonyV1 {
'    // 
    int64_t duration;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCeremonyV1& v) {
    j["duration"] = v.duration;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCeremonyV1& v) {
    v.duration = j.at("duration").get<int64_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderCeremonyV1_HPP
