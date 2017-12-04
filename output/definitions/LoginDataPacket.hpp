#ifndef SWAGGER_TYPES_LoginDataPacket_HPP
#define SWAGGER_TYPES_LoginDataPacket_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LoginDataPacket {
    // 
    uint64_t timeUntilFirstWinOfDay;
  };

  inline void to_json(nlohmann::json& j, const LoginDataPacket& v) {
    j["timeUntilFirstWinOfDay"] = v.timeUntilFirstWinOfDay;
  }

  inline void from_json(const nlohmann::json& j, LoginDataPacket& v) {
    v.timeUntilFirstWinOfDay = j.at("timeUntilFirstWinOfDay").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LoginDataPacket_HPP
