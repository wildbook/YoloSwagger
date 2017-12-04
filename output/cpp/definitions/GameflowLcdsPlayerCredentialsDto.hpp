#ifndef SWAGGER_TYPES_GameflowLcdsPlayerCredentialsDto_HPP
#define SWAGGER_TYPES_GameflowLcdsPlayerCredentialsDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct GameflowLcdsPlayerCredentialsDto {
    // 
    uint64_t gameId;
    // 
    bool observer;
    // 
    uint16_t observerServerPort;
    // 
    std::string observerServerIp;
    // 
    std::string serverIp;
    // 
    uint64_t summonerId;
    // 
    uint16_t serverPort;
    // 
    std::string encryptionKey;
    // 
    std::string observerEncryptionKey;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsPlayerCredentialsDto& v) {
    j["gameId"] = v.gameId;
    j["observer"] = v.observer;
    j["observerServerPort"] = v.observerServerPort;
    j["observerServerIp"] = v.observerServerIp;
    j["serverIp"] = v.serverIp;
    j["summonerId"] = v.summonerId;
    j["serverPort"] = v.serverPort;
    j["encryptionKey"] = v.encryptionKey;
    j["observerEncryptionKey"] = v.observerEncryptionKey;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsPlayerCredentialsDto& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.observer = j.at("observer").get<bool>;
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>;
    v.observerServerIp = j.at("observerServerIp").get<std::string>;
    v.serverIp = j.at("serverIp").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.serverPort = j.at("serverPort").get<uint16_t>;
    v.encryptionKey = j.at("encryptionKey").get<std::string>;
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_GameflowLcdsPlayerCredentialsDto_HPP
