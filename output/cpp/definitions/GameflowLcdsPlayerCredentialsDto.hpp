#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameflowLcdsPlayerCredentialsDto_t {
    std::string encryptionKey;
    uint64_t gameId;
    std::string serverIp;
    std::string observerServerIp;
    std::string observerEncryptionKey;
    uint64_t summonerId;
    bool observer;
    uint16_t serverPort;
    uint16_t observerServerPort;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsPlayerCredentialsDto_t& v) {
    j["encryptionKey"] = v.encryptionKey;
    j["gameId"] = v.gameId;
    j["serverIp"] = v.serverIp;
    j["observerServerIp"] = v.observerServerIp;
    j["observerEncryptionKey"] = v.observerEncryptionKey;
    j["summonerId"] = v.summonerId;
    j["observer"] = v.observer;
    j["serverPort"] = v.serverPort;
    j["observerServerPort"] = v.observerServerPort;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsPlayerCredentialsDto_t& v) {
    v.encryptionKey = j.at("encryptionKey").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.serverIp = j.at("serverIp").get<std::string>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.observer = j.at("observer").get<bool>();
    v.serverPort = j.at("serverPort").get<uint16_t>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
  }
  inline std::string to_string(const GameflowLcdsPlayerCredentialsDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
