#ifndef SWAGGER_TYPES_LolLeaguesLeaguesLoginDataPacket_HPP
#define SWAGGER_TYPES_LolLeaguesLeaguesLoginDataPacket_HPP
#include <json.hpp>
#include "LolLeaguesSimpleMessage.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLeaguesLoginDataPacket {
    // 
    std::vector<LolLeaguesSimpleMessage> simpleMessages;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesLoginDataPacket& v) {
    j["simpleMessages"] = v.simpleMessages;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesLoginDataPacket& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLeaguesSimpleMessage>>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeaguesLoginDataPacket_HPP
